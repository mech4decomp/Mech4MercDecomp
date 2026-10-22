/*
 * FUN_0069CB30 (96 B) — __fastcall (ECX = this) constructor.
 *
 * Calls FUN_00561430 with a global, sets the vtable pointer, allocates
 * 0x138 bytes via FUN_004084D0, initializes a sub-object via
 * FUN_00560190, and zero-initializes several fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);

__declspec(naked) void *__fastcall FUN_0069cb30(void *this)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x138
        mov     dword ptr [esi], 0x7999e4
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 4
        cmp     eax, ebx
        jz      l_zero
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        jmp     l_store
    l_zero:
        xor     eax, eax
    l_store:
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     byte ptr [esi + 0x5c], bl
        mov     dword ptr [esi + 0x14], 0x43c80000
        mov     dword ptr [esi + 0x1c], 0x3f666666
        mov     dword ptr [esi + 0x34], 0xff00fa00
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
