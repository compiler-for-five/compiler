#ifndef ASMCODE_H
#define ASMCODE_H

// ���Ƚ������ǻᾭ��������һЩ�Ĵ���:
// 4�����ݼĴ���(EAX��EBX��ECX��EDX)
// 2����ַ��ָ��Ĵ���(ESI��EDI)
// 2��ָ��Ĵ���(ESP��EBP)
// Eax���Դ洢��������DWORD��˫�֣�
// Eax������������API�����ķ���ֵ��

// �Ĵ���AX��ALͨ����Ϊ�ۼ���(Accumulator)�����ۼ������еĲ���������Ҫ����ʱ�䡣�ۼ��������ڳˡ���������/����Ȳ��������ǵ�ʹ��Ƶ�ʺܸߣ�
// �Ĵ���BX��Ϊ����ַ�Ĵ���(Base Register)��������Ϊ�洢��ָ����ʹ�ã� 
// �Ĵ���CX��Ϊ�����Ĵ���(Count Register)����ѭ�����ַ�������ʱ��Ҫ����������ѭ����������λ�����У����ƶ�λʱ��Ҫ��CL��ָ����λ��λ����
// �Ĵ���DX��Ϊ���ݼĴ���(Data Register)���ڽ��гˡ�������ʱ��������ΪĬ�ϵĲ������������㣬Ҳ�����ڴ��I/O�Ķ˿ڵ�ַ��

// Asm instructor ���ָ�����ָ�ת�ơ���ӡ�push�ȵ�
#define ASM_MOV     "mov"
#define ASM_ADD     "add"
#define ASM_XOR     "xor"
#define ASM_NEG     "neg" //NEG�ǻ��ָ���е���ָ�NEGָ��Բ�����ִ�������㣺�����ȥ��������Ȼ�������ز�������������Ҳ���Ա��ɣ�����������λȡ�����1��
#define ASM_SUB     "sub"
#define ASM_MUL     "mul"
#define ASM_DIV     "div"
#define ASM_PUSH    "push"
#define ASM_POP     "pop"
#define ASM_CALL    "call"
#define ASM_RET     "ret" // ����ָ��
#define ASM_CMP     "cmp" 
#define ASM_ENTER   "enter"
// ENTER ָ��Ϊ�����ù����Զ�������ջ֡����Ϊ�ֲ�����������ջ�ռ䣬�� EBP ��ջ��������˵����ִ������������
// �� EBP ��ջ (push ebp)
// �� EBP ����Ϊ��ջ֡�Ļ�ַ (mov ebp, esp)
// Ϊ�ֲ����������ռ� (sub esp, numbytes)
// ENTER ����������������һ���ǳ���������Ϊ�ֲ���������Ķ�ջ�ռ��ֽ������ڶ��������˹��̵Ĵʷ�Ƕ�׼���
// ENTER numbytes, nestinglevel
// ������������������������Numbytes ������������Ϊ 4 �ı������Ա� ESP ����˫�ֱ߽硣Nestinglevel ȷ���˴��������̶�ջ֡���Ƶ���ǰ֡�Ķ�ջָ֡��ĸ�������ʾ�������У�nestinglevel ����Ϊ 0��
#define ASM_LEAVE   "leave"
// LEAVE ָ��
// LEAVE ָ�����һ�����̵Ķ�ջ֡������ת��֮ǰ�� ENTER ָ��������ָ��˹��̱�����ʱ ESP �� EBP ��ֵ

// Jump instructor ��תָ��������жϵȵȵȵ�
#define ASM_JUMP    "jmp"
#define ASM_JE      "je"
#define ASM_JG      "jg"
#define ASM_JGE     "jge"
#define ASM_JL      "jl"
#define ASM_JLE     "jle"
#define ASM_JNE     "jne"

// 32-bit asm register 32λasm�Ĵ���
// 2����Ҫ��ָ��Ĵ���(ESP��EBP)
#define ASM_EAX     "eax"
#define ASM_EBX     "ebx"
#define ASM_ECX     "ecx"
#define ASM_EDX     "edx"
#define ASM_EBP     "ebp"
#define ASM_ESP     "esp"
// ��ôESP��EBPָ�ķֱ���ʲô�أ�

// ��1��ESP��ջָ��Ĵ���(extended stack pointer)��
// ���ڴ����һ��ָ�룬��ָ����Զָ��ϵͳջ������һ��ջ֡��ջ����
// ��2��EBP����ַָ��Ĵ���(extended base pointer)��
// ���ڴ����һ��ָ�룬��ָ����Զָ��ϵͳջ������һ��ջ֡�ĵײ���

// ������Ҫע��������intelϵͳ��ջ������������(ջԽ������ֵԽС,��ǡ���෴)

// pop ebp;��ջ ջ����4byte ��ΪebpΪ32λ

// push ebp;��ջ��ջ����4byte


// Date type ˫�ֽ��ֳ�
#define DOUBLE_WORD "dword"

// Other characters 
#define ASM_LB      "["
#define ASM_RB      "]"
#define ASM_COMMA   ","
#define ASM_COLON   ":"

#endif