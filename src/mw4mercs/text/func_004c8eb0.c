/*
 * FUN_004C8EB0 (33 B) — XOR-based setter with global keys.
 *
 * __cdecl. Writes XOR-encoded value to an array indexed by a global key.
 *   ecx = *g_key1 (0x007DAB44)
 *   edx = [ecx]
 *   ecx = g_key2 (0x007DAB40)
 *   edx ^= ecx
 *   eax = param1 ^ 0x85739531
 *   [edx + param2*4] = eax
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_004c8eb0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     edx, dword ptr [ecx]
        _emit 0x8B
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, dword ptr [esp + 4]
        xor     edx, ecx
        mov     ecx, dword ptr [esp + 8]
        xor     eax, 0x85739531
        mov     dword ptr [edx + ecx * 4], eax
        ret
    }
}
