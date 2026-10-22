/*
 * FUN_00431710 (150 B) — MLR look-up-light global init. __cdecl.
 * Registers a mesh type, allocates + initializes two global objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007b9814;
extern int g_007b9824;
extern int g_007b9810;
extern int g_007b980c;
extern char g_76e2ec;
extern char g_76e2c8;
extern char g_431940;
extern void FUN_006f4710(void);
extern void FUN_004084d0(void);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_00431710(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    offset g_76e2ec
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007b9814], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      null1
        mov     ecx, dword ptr [g_007b9824]
        push    ecx
        push    offset g_76e2c8
        push    0x6f
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], offset g_431940
        mov     dword ptr [g_007b9810], esi
        jmp     alloc2
null1:
        mov     dword ptr [g_007b9810], 0
alloc2:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      null2
        push    0x400
        mov     dword ptr [esi], 0
        mov     dword ptr [esi+0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b980c], esi
        pop     esi
        ret
null2:
        mov     dword ptr [g_007b980c], 0
        pop     esi
        ret
    }
}
