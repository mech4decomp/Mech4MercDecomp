/*
 * FUN_005DDEF0 (59 B) — __cdecl. Allocates a 0x20-byte LancemateManager
 * object, constructs it via FUN_004D5C10, stores the result in the global
 * DAT_007F251C. On alloc failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __cdecl FUN_004d5c10(int, const char *, void *, int, int);

__declspec(naked) void __cdecl FUN_005ddef0(void)
{
    
__asm {
push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LDF20
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D memory deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x40
        _emit   0xC1
        _emit   0x7D
        _emit   0x00
        push    0x0
        push    0x0
        push    ecx
        push    0x788614
        push    0x4b3
        mov     ecx, eax
        call    FUN_004d5c10
        /* __emit: MSVC6 rejects mov [imm32],reg absolute form; A3 encoding */
        _emit   0xA3
        _emit   0x1C
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        ret
LDF20:
        /* __emit: MSVC6 rejects mov [imm32],imm32 absolute form; C7 05 encoding */
        _emit   0xC7
        _emit   0x05
        _emit   0x1C
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        ret
    }


}
