/*
 * FUN_00563520 (34 B) — memmove wrapper: copies (src_end - src_start) bytes
 * from src_start to dst, returns dst + (src_end - src_start).
 * __cdecl (plain ret, no stack cleanup).
 * CFLAGS: /O1
 */

__declspec(naked) void * __cdecl FUN_00563520(void *src_start, void *src_end, void *dst)
{
    
__asm {
mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        sub     esi, eax
        push    esi
        push    eax
        push    edi
        /* __emit: MSVC6 inline asm cannot encode call dword ptr [imm32] */
        _emit 0xFF
        _emit 0x15
        _emit 0x8C
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        add     esp, 0xC
        lea     eax, [esi + edi]
        pop     edi
        pop     esi
        ret
    }


}
