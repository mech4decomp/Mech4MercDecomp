/*
 * FUN_004C8E10 (69 B) — Init function.
 *
 * __cdecl. Allocates 4 bytes for a seed value, calls FUN_00414fd0,
 * allocates 0x78 bytes and fills with 0x85739531, XORs with seed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(int size);
extern unsigned int __cdecl FUN_00414fd0(void);

__declspec(naked) void __cdecl FUN_004c8e10(void)
{
    __asm {
        push    edi
        push    4
        call    FUN_004084d0
        _emit 0xA3
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        call    FUN_00414fd0
        _emit 0x8B
        _emit 0x0D
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push    0x78
        mov     dword ptr [ecx], eax
        call    FUN_004084d0
        mov     edx, eax
        mov     eax, 0x85739531
        mov     edi, edx
        mov     ecx, 0x1e
        rep stosd
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     ecx, dword ptr [eax]
        add     esp, 8
        xor     edx, ecx
        _emit 0x89
        _emit 0x15
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        pop     edi
        ret
    }
}
