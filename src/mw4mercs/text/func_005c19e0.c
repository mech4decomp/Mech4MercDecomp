/*
 * FUN_005c19e0 (254 B) — __thiscall (ECX = this), RET 8.
 *
 * Calls FUN_006f4950(DAT_007f2460). If (this->field_2f2 == 1) and
 * (this->field_2f9 == 0): allocates 0x30 bytes, copies 0xc dwords from
 * (*(this->field_170)+0xd8)+0x80, builds a small object at this+0x598,
 * frees the temp, calls FUN_005c44c0 if field_4e0 low bits set, and
 * copies 4 dwords into this+0x588..0x594. Finally calls FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c19e0(int param_1, void *param_2, int param_3)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f4949(void);
extern void __cdecl FUN_1004084a5(void);
extern void __cdecl FUN_005cbdc4(void);
extern void __cdecl FUN_005cbb81(void);
extern void __cdecl FUN_005cb638(void);
extern void __cdecl FUN_100408436(void);
extern void __cdecl FUN_005c4400(void);
extern void __cdecl FUN_006f48b3(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        sub     esp, 0x8
        push    ebx
        push    eax
        mov     ebx, ecx
        call FUN_006f4949
        cmp     byte ptr [ebx + 0x2f2], 0x1
        jnz     l_ad2
        mov     al, byte ptr [ebx + 0x2f9]
        test    al, al
        jnz     l_ad2
        push    esi
        push    edi
        push    0x30
        call FUN_1004084a5
        add     esp, 0x4
        test    eax, eax
        jz      l_a3b
        mov     ecx, dword ptr [ebx + 0x170]
        mov     esi, dword ptr [ecx + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        mov     edi, eax
        jmp     l_a3d
    l_a3b:
        xor     edi, edi
    l_a3d:
        mov     edx, dword ptr [ebx + 0x598]
        lea     esi, [ebx + 0x598]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edx
        call FUN_005cbdc4
        lea     eax, [esp + 0x10]
        or      edi, 0x1
        push    eax
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi], edi
        call FUN_005cbb81
        lea     ecx, [esp + 0x10]
        call FUN_005cb638
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        pop     edi
        pop     esi
        jnz     l_a97
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 0x2
        mov     dword ptr [esp + 0x8], eax
        call FUN_100408436
        add     esp, 0x4
    l_a97:
        test    dword ptr [ebx + 0x4e0], 0xfffffffc
        jz      l_aaa
        mov     ecx, ebx
        call FUN_005c4400
    l_aaa:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebx + 0x588], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x58c], edx
        mov     dword ptr [ebx + 0x590], eax
        mov     dword ptr [ebx + 0x594], ecx
    l_ad2:
        call FUN_006f48b3
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }


}
