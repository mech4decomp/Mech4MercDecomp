/*
 * FUN_004B2830 (91 B) — ElementRenderer::ShapeLODElement init.
 * Calls FUN_006F4710("ShapeLOD", 0, DAT_007da9e8), then allocates 0x18
 * bytes, initializes with name/ID, stores vtable pointer at +0x14,
 * saves to global DAT_007da9fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(int id, const char *name, void *param);
extern int __cdecl FUN_006f4710(const char *name, int a, int b);

__declspec(naked) void FUN_004b2830(void)
{
    __asm {
        _emit   0xA1
        _emit   0xE8
        _emit   0xA9
        _emit   0x7D
        _emit   0x00
        PUSH    ESI
        PUSH    EAX
        PUSH    0x00
        PUSH    0x770660
        CALL    FUN_006f4710
        PUSH    0x18
        _emit   0xA3
        _emit   0xF8
        _emit   0xA9
        _emit   0x7D
        _emit   0x00
        CALL    FUN_004084d0
        MOV     ESI, EAX
        ADD     ESP, 0x04
        TEST    ESI, ESI
        JZ      l_null_case
        _emit   0x8B
        _emit   0x0D
        _emit   0x18
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        PUSH    ECX
        PUSH    0x77063C
        PUSH    0x90
        MOV     ECX, ESI
        CALL    FUN_004151c0
        MOV     DWORD PTR [ESI + 0x14], 0x4B3000
        _emit   0x89
        _emit   0x35
        _emit   0xFC
        _emit   0xA9
        _emit   0x7D
        _emit   0x00
        POP     ESI
        RET
    l_null_case:
        _emit   0xC7
        _emit   0x05
        _emit   0xFC
        _emit   0xA9
        _emit   0x7D
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        POP     ESI
        RET
    }
}
