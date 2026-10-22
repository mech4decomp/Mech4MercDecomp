/*
 * FUN_00641820 (90 B) — __fastcall (ECX = this), RET (no stack params).
 * Destructor: installs vtable 0x7925e4, calls virtuals on this+0x64,
 * this+0x68, an array of 0x29 pointers at this+0x6c, and this+0x110, then
 * calls FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00641820(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x64]
        test    ecx, ecx
        mov     dword ptr [edi], 0x7925e4
        jz      L2
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L2:
        mov     ecx, dword ptr [edi + 0x68]
        test    ecx, ecx
        jz      L3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L3:
        push    ebx
        push    esi
        lea     esi, [edi + 0x6c]
        mov     ebx, 0x29
L_loop:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L4
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L4:
        add     esi, 0x4
        dec     ebx
        jnz     L_loop
        mov     ecx, dword ptr [edi + 0x110]
        test    ecx, ecx
        pop     esi
        pop     ebx
        jz      L5
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L5:
        mov     ecx, edi
        call    FUN_00561730
        pop     edi
        ret
    }
}
