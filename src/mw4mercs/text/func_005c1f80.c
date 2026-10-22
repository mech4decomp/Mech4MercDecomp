/*
 * FUN_005c1f80 (162 B) — __fastcall (ECX = this).
 *
 * Calls FUN_006f4950(). Iterates a list obtained from FUN_005faef0() on
 * this+0x170. For each element, computes a hashed key from globals
 * 0x007dab44/0x007dab40, calls FUN_00600940/FUN_0064e600; if it returns 1,
 * calls FUN_00600940/FUN_0064e5a0/FUN_0064de20(this). Then if
 * (this->field_5f4 & ~3) is nonzero, calls the virtual method at
 * vtable+0x4. Tail-jumps to FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1f80(int param_1)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f494a(void);
extern void __cdecl FUN_005faedd(void);
extern void __cdecl FUN_005faed4(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_006008fc(void);
extern void __cdecl FUN_0064e5b5(void);
extern void __cdecl FUN_006008e9(void);
extern void __cdecl FUN_0064e542(void);
extern void __cdecl FUN_0064ddba(void);
extern void __cdecl FUN_005fae7c(void);
extern void __cdecl FUN_006f4908(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov     ebp, ecx
        call FUN_006f494a
        mov     esi, dword ptr [ebp + 0x170]
        mov     ecx, esi
        call FUN_005faedd
        mov     ebx, dword ptr [eax]
        mov     ecx, esi
        call FUN_005faed4
        cmp     ebx, dword ptr [eax + 0x4]
        jz      l_2004
        push    edi
    l_1fac:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov eax, dword ptr [DAT_007dab40]
        mov     edi, dword ptr [ebx]
        xor     edx, eax
        mov     esi, dword ptr [edx + 0x20]
        xor     esi, 0x85739531
        push    edi
        mov     ecx, esi
        call FUN_006008fc
        mov     ecx, eax
        call FUN_0064e5b5
        cmp     al, 0x1
        jnz     l_1ff0
        push    edi
        mov     ecx, esi
        call FUN_006008e9
        mov     ecx, eax
        call FUN_0064e542
        push    ebp
        mov     ecx, eax
        call FUN_0064ddba
    l_1ff0:
        mov     ecx, dword ptr [ebp + 0x170]
        add     ebx, 0x4
        call FUN_005fae7c
        cmp     ebx, dword ptr [eax + 0x4]
        jnz     l_1fac
        pop     edi
    l_2004:
        mov     ecx, dword ptr [ebp + 0x5f4]
        test    ecx, 0xfffffffc
        pop     esi
        pop     ebp
        pop     ebx
        jz      l_201d
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
    l_201d:
        jmp FUN_006f4908
    }


}
