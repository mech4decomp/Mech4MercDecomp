/*
 * FUN_0066ab00 (125 B) — Motion-state string selector.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Calls FUN_0062f530(param), then selects a state string based on
 * *(*(this+0xE0)+0x14) and passes it to FUN_00412780.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0062f530(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0066ab00(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_0062f530
        mov     eax, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        sub     eax, 8
        mov     dword ptr [esp + 0xc], 0
        jz      l_3a
        dec     eax
        jz      l_33
        sub     eax, 2
        jnz     l_78
        push    0x78a394
        jmp     l_3f
    l_33:
        push    0x78a3bc
        jmp     l_3f
    l_3a:
        push    0x78a3d0
    l_3f:
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_78
        push    eax
        push    0x773250
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_78
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_78
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_78:
        pop     edi
        pop     esi
        ret     4
    }
}
