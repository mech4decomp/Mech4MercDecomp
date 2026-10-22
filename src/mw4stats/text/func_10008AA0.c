/* FUN_10008aa0 - __thiscall, ECX=this, param_1=[esp+4] */

extern void __cdecl FUN_100082f0(void);
extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_100258b0;
extern char g_str_100258a4;

void __declspec(naked) FUN_10008aa0(void)
{
    __asm {
        push ecx
        mov  eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov  ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        xor  edi, edi
        mov  ebx, ecx
        mov  dword ptr [esp + 0x10], edi
        mov  dword ptr [eax], edi
L_ab7:
        mov  ecx, dword ptr [ebx + 0x14]
        mov  eax, edi
        sub  eax, 0x0
        mov  si, word ptr [ecx]
        jz   L_b1a
        dec  eax
        jz   L_ae5
        dec  eax
        jnz  L_b3c
        mov  ecx, ebx
        call FUN_100082f0
        test al, al
        jz   L_b45
        mov  eax, dword ptr [esp + 0x10]
        mov  edi, 0x1
        inc  eax
        mov  dword ptr [esp + 0x10], eax
        jmp  L_ab7
L_ae5:
        cmp  si, 0x3c
        jz   L_b4a
        cmp  si, 0x26
        jnz  L_b05
        mov  edx, dword ptr [ebx + 0x8]
        shr  edx, 0x2
        not  dl
        test dl, 0x1
        jz   L_b05
        mov  edi, 0x2
        jmp  L_ab7
L_b05:
        push 0x0
        lea  ecx, [ebx + 0xc]
        call FUN_10006ef0
        cmp  si, bp
        jz   L_b54
        inc  dword ptr [esp + 0x10]
        jmp  L_ab7
L_b1a:
        cmp  si, 0x22
        jz   L_b26
        cmp  si, 0x27
        jnz  L_b5b
L_b26:
        push 0x0
        lea  ecx, [ebx + 0xc]
        mov  ebp, esi
        call FUN_10006ef0
        mov  edi, 0x1
        jmp  L_ab7
L_b3c:
        test edi, edi
        jl   L_b6a
        jmp  L_ab7
L_b45:
        or   edi, 0xffffffff
        jmp  L_b6a
L_b4a:
        or   edi, 0xffffffff
        push offset g_str_100258b0
        jmp  L_b63
L_b54:
        mov  edi, 0xfffffffe
        jmp  L_b6a
L_b5b:
        or   edi, 0xffffffff
        push offset g_str_100258a4
L_b63:
        mov  ecx, ebx
        call FUN_10008d30
L_b6a:
        cmp  edi, -0x2
        pop  edi
        setz al
        pop  esi
        pop  ebp
        test al, al
        pop  ebx
        jz   L_b82
        mov  edx, dword ptr [esp + 0x8]
        __emit 0x8B  /* __emit: MSVC6 drops zero-disp [esp] -> 8B 0C 24; ref needs 8B 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov  dword ptr [edx], ecx
L_b82:
        pop  ecx
        ret  0x4
    }
}
