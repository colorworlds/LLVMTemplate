#include <iostream>
#include "llvm/IR/LLVMContext.h"  // 公共的数据结构
#include "llvm/IR/Module.h"       // 一个源文件的抽象 { 全局变量，函数 {基本块组成} }
#include "llvm/IR/IRBuilder.h"    // 指令生成器, 加法、减法等等、还可以获取类型
#include "llvm/IR/Verifier.h"    //校验模块、校验函数
using namespace std;
using namespace llvm;

int main() {
  auto llvmContext = std::make_unique<LLVMContext>();
  auto module = std::make_unique<Module>("ir_global", *llvmContext);
  auto irBuilder = std::make_unique<IRBuilder<>>(*llvmContext);

  // int a ;
  module->getOrInsertGlobal("a", irBuilder->getInt32Ty());

  module->print(errs(),nullptr);

  std::cout << "Hello World!\n";
}