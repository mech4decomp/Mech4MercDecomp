/* func_004db640.c - FUN_004db640 (642 B) - texture file loader
 * Builds a "content\textures\" path, retries with .png extension, and calls
 * the texture-loading API (FUN_00717a60) with various flags.
 */
#include <stddef.h>

extern int g_7dc6e8;    /* [0x007dc6e8] byte/dword */
extern int g_858948;    /* [0x00858948] */
extern char g_7b8ef0;   /* [0x007b8ef0] */

extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_004125e0(void *);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_0040d9b0(void *);
extern void __cdecl FUN_004d2000(void *);
extern void __cdecl FUN_004d21c0(void *);
extern void __cdecl FUN_006fc4d0(void *);
extern void __cdecl FUN_004d2310(void *);
extern void __cdecl FUN_004d2330(void *);
extern void __cdecl FUN_00717a60(void *);
extern void __cdecl FUN_00717c60(void *);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void func_004db640(void)
{
    __asm {
        SUB ESP,0x4c
        PUSH EBX
        PUSH EBP
        PUSH ESI
        PUSH EDI
        PUSH 0x773498
        LEA ECX,[ESP + 0x14]
        CALL FUN_00412570
        MOV EAX,dword ptr [ESP + 0x60]
        MOV ECX,dword ptr [ESP + 0x10]
        PUSH EAX
        PUSH ECX
        LEA ECX,[ESP + 0x68]
        CALL FUN_004125e0
        PUSH EAX
        LEA ECX,[ESP + 0x14]
        CALL FUN_00412740
        LEA ECX,[ESP + 0x60]
        CALL FUN_0040d9b0
        MOV EDX,dword ptr [ESP + 0x10]
        PUSH 0x7700ac
        PUSH EDX
        LEA ECX,[ESP + 0x68]
        CALL FUN_004125e0
        PUSH EAX
        LEA ECX,[ESP + 0x14]
        CALL FUN_00412740
        LEA ECX,[ESP + 0x60]
        CALL FUN_0040d9b0
        MOV EDX,dword ptr [ESP + 0x10]
        TEST EDX,EDX
        JNZ strlen
        XOR ECX,ECX
        JMP got_len
strlen:
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        REPNE SCASB
        NOT ECX
        DEC ECX
got_len:
        MOV EBP,dword ptr [ESP + 0x64]
        LEA ESI,[ECX + EDX*0x1 - 0x3]
loop_start:
        PUSH 0x0
        PUSH EDX
        LEA ECX,[ESP + 0x20]
        CALL FUN_004d2000
        MOV EAX,dword ptr [ESP + 0x54]
        TEST EAX,EAX
        JZ set_bl0
        MOV EAX,dword ptr [ESP + 0x34]
        TEST EAX,EAX
        JBE set_bl0
        MOV BL,0x1
        JMP got_bl
set_bl0:
        XOR BL,BL
got_bl:
        LEA ECX,[ESP + 0x18]
        CALL FUN_004d21c0
        TEST BL,BL
        JNZ do_break
        TEST EBP,0x800
        JZ skip_800
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        REPNE SCASB
        MOV AL,byte ptr [g_7dc6e8]
        NOT ECX
        MOV BL,byte ptr [ECX + EDX*0x1 - 0x6]
        ADD ECX,-0x6
        ADD BL,AL
        MOV byte ptr [ECX + EDX*0x1],BL
skip_800:
        MOV ECX,dword ptr [ESP + 0x10]
        PUSH ECX
        CALL FUN_006fc4d0
        TEST AL,AL
        JNZ do_717a60
        CMP byte ptr [ESI],0x70
        JZ ret_zero
        MOV byte ptr [ESI],0x70
        MOV byte ptr [ESI + 0x1],0x6e
        MOV byte ptr [ESI + 0x2],0x67
        MOV EDX,dword ptr [ESP + 0x10]
        JMP loop_start
do_break:
        MOV EAX,dword ptr [ESP + 0x10]
        TEST EAX,EAX
        MOV dword ptr [ESP + 0x14],EAX
        JZ skip_inc
        INC byte ptr [EAX - 0x1]
skip_inc:
        MOV EDX,dword ptr [ESP + 0x14]
        PUSH 0x773490
        PUSH EDX
        LEA ECX,[ESP + 0x6c]
        CALL FUN_004125e0
        MOV EAX,dword ptr [ESP + 0x64]
        PUSH 0x0
        PUSH EAX
        LEA ECX,[ESP + 0x20]
        CALL FUN_004d2000
        LEA ECX,[ESP + 0x64]
        CALL FUN_0040d9b0
        LEA ECX,[ESP + 0x14]
        CALL FUN_0040d9b0
        LEA ECX,[ESP + 0x18]
        CALL FUN_004d2310
        MOV EDX,dword ptr [ESP + 0x18]
        PUSH 0x4
        LEA ECX,[ESP + 0x64]
        PUSH ECX
        LEA ECX,[ESP + 0x20]
        CALL dword ptr [EDX + 0x20]
        CMP dword ptr [g_858948],0x20
        JNZ skip_or80
        OR dword ptr [ESP + 0x60],0x80
skip_or80:
        LEA ECX,[ESP + 0x18]
        CALL FUN_004d2330
        MOV EAX,dword ptr [ESP + 0x60]
        TEST AH,0x8
        JZ skip_800b
        MOV ECX,dword ptr [g_7dc6e8]
        SAR EAX,0x18
        ADD EAX,ECX
        MOV EBX,EAX
        JNS skip_neg
        XOR EBX,EBX
skip_neg:
        MOV EDX,dword ptr [ESP + 0x10]
        XOR EAX,EAX
        OR ECX,0xffffffff
        MOV EDI,EDX
        REPNE SCASB
        NOT ECX
        MOV AL,byte ptr [ECX + EDX*0x1 - 0x6]
        ADD ECX,-0x6
        ADD AL,BL
        MOV byte ptr [ECX + EDX*0x1],AL
        MOV EAX,dword ptr [ESP + 0x10]
        CMP byte ptr [ECX + EAX*0x1],0x35
        JLE skip_35
        MOV byte ptr [ECX + EAX*0x1],0x35
skip_35:
        MOV EAX,dword ptr [ESP + 0x60]
skip_800b:
        MOV ECX,EAX
        AND EAX,0xffff
        PUSH 0x0
        MOV dword ptr [ESP + 0x64],EAX
        PUSH 0x0
        OR EAX,EBP
        PUSH EAX
        MOV EAX,dword ptr [ESP + 0x1c]
        SAR ECX,0x10
        MOVSX ECX,CL
        PUSH EAX
        PUSH ECX
        CALL FUN_00717a60
        MOV EDX,dword ptr [ESP + 0x60]
        AND EDX,0x6
        CMP DL,0x4
        MOV ESI,EAX
        JNZ skip_717c60
        PUSH ESI
        CALL FUN_00717c60
skip_717c60:
        LEA ECX,[ESP + 0x18]
        CALL FUN_004d21c0
        JMP done
do_717a60:
        MOV AL,byte ptr [g_7b8ef0]
        TEST AL,AL
        JZ use_local
        PUSH 0x0
        PUSH 0x0
        PUSH EBP
        MOV byte ptr [g_7b8ef0],0x0
        PUSH 0x7b8de8
        JMP call_717a60
use_local:
        MOV EAX,dword ptr [ESP + 0x10]
        PUSH 0x0
        PUSH 0x0
        PUSH EBP
        PUSH EAX
call_717a60:
        PUSH -0x1
        CALL FUN_00717a60
        MOV ESI,EAX
done:
        MOV EAX,dword ptr [ESP + 0x10]
        TEST EAX,EAX
        JZ skip_free
        MOV CL,byte ptr [EAX - 0x1]
        DEC EAX
        DEC CL
        MOV byte ptr [EAX],CL
        JNZ skip_free
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP,0x4
skip_free:
        POP EDI
        MOV EAX,ESI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x4c
        RET
ret_zero:
        MOV EAX,dword ptr [ESP + 0x10]
        TEST EAX,EAX
        JZ skip_free2
        MOV CL,byte ptr [EAX - 0x1]
        DEC EAX
        DEC CL
        MOV byte ptr [EAX],CL
        JNZ skip_free2
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP,0x4
skip_free2:
        POP EDI
        POP ESI
        POP EBP
        XOR EAX,EAX
        POP EBX
        ADD ESP,0x4c
        RET
    }
}
