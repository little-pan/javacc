/* Generated By:JJTree: Do not edit this line. ASTBitwiseComplNode.h Version 8.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"


class ASTBitwiseComplNode : public SimpleNode {
public: 
  ASTBitwiseComplNode(int id);
  virtual ~ASTBitwiseComplNode();
  virtual void interpret();
};

/* JavaCC - OriginalChecksum=310fca10a4c89148abaaf76ac9478a5c (do not edit this line) */
