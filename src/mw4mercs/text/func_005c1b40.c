/*
 * FUN_005c1b40 (119 B) — __thiscall (ECX = this), RET 4.
 *
 * If FUN_00415230(DAT_007f1f84) is nonzero: if param == 1, calls
 * FUN_0041fd80() on this+0x1c8, gathers 3 dwords from the result and
 * calls FUN_0058b690(&local); else calls FUN_0058b6c0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1b40(int param_1, int param_2)
{
    

extern int DAT_007f1f84;
extern void __cdecl FUN_10041521f(void);
extern void __cdecl FUN_10041fd59(void);
extern void __cdecl FUN_10058b63a(void);
extern void __cdecl FUN_10058b65b(void);
__asm {
        mov eax, dword ptr [DAT_007f1f84]
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041521f
        test    al, al
        jz      l_baf
        cmp     byte ptr [esp + 0x18], 0x1
        jnz     l_ba8
        lea     ecx, [edi + 0x1c8]
        call FUN_10041fd59
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x8], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], eax
        call FUN_10058b63a
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     0x4
    l_ba8:
        mov     ecx, esi
        call FUN_10058b65b
    l_baf:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }


}
