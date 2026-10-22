/*
 * FUN_0051E0E0 (65 B) — __stdcall; XOR-decodes a pointer chain from globals
 * 0x7dab44/0x7dab40, returns 0x63 or a value from the decoded object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __stdcall FUN_0051E0E0(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     eax, 0x63
        je      l_done
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x34]
        test    esi, esi
        pop     esi
        je      l_done
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        mov     eax, dword ptr [ecx + 0x44]
    l_done:
        ret     0xc
    }
}
