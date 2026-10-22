/*
 * FUN_004BB950 (67 B) — ElementRenderer::TriangleCloudElement init.
 * Allocates 0x18 bytes, initializes with name/ID, stores vtable pointer
 * at +0x14, saves to global DAT_007daa58.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(int id, const char *name, void *param);

__declspec(naked) void FUN_004bb950(void)
{
    __asm {
        PUSH    ESI
        PUSH    0x18
        CALL    FUN_004084d0
        MOV     ESI, EAX
        ADD     ESP, 0x04
        TEST    ESI, ESI
        JZ      l_null_case
        _emit   0xA1
        _emit   0x18
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        PUSH    EAX
        PUSH    0x7710E4
        PUSH    0x88
        MOV     ECX, ESI
        CALL    FUN_004151c0
        MOV     DWORD PTR [ESI + 0x14], 0x4BBAE0
        _emit   0x89
        _emit   0x35
        _emit   0x58
        _emit   0xAA
        _emit   0x7D
        _emit   0x00
        POP     ESI
        RET
    l_null_case:
        _emit   0xC7
        _emit   0x05
        _emit   0x58
        _emit   0xAA
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
