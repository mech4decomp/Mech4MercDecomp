/*
 * FUN_00679560 (157 B) — __fastcall (ECX = this) constructor.
 *
 * Calls FUN_00561430(DAT_007ddde0), sets vtable 0x797fe8 and float
 * fields, allocates 0x138 bytes, initializes a sub-object, and calls
 * FUN_00560420. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007ddde0;
extern void __cdecl FUN_00561430(unsigned int arg);
extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00560190(void *this);
extern void __fastcall FUN_00560420(void *this, int a, int b, int c);

__declspec(naked) void __fastcall FUN_00679560(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     eax, 0x3f666666
        mov     dword ptr [esi], 0x797fe8
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x14], 0x3f000000
        mov     dword ptr [esi + 0x18], 0x3e947ae1
        push    0x138
        mov     dword ptr [esi + 0x20], 0x3ea3d70a
        mov     dword ptr [esi + 0x24], 0x3e800000
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x34], 0xfa191919
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_skip
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     l_cont
    l_skip:
        xor     edi, edi
    l_cont:
        push    0
        push    0
        push    0x76b768
        mov     ecx, edi
        mov     dword ptr [esi + 0x50], edi
        call    FUN_00560420
        mov     dword ptr [edi + 0x10c], 0
        mov     dword ptr [edi + 0x104], 0xffffffff
        mov     dword ptr [esi + 0x54], 0
        pop     edi
        mov     dword ptr [esi + 0x58], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
