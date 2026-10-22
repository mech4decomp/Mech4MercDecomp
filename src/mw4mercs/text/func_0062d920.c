/*
 * FUN_0062D920 (101 B) — Table lookup / dispatch helper.
 *
 * XORs a global pointer with a key, then calls FUN_0041ec50() on one of
 * two table entries depending on a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern void __cdecl FUN_0041ec50(void *ptr, int size);

__declspec(naked) void FUN_0062d920(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x16]
        xor     ecx, 0x85739531
        test    al, al
        jz      L_96c
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [ecx + 0x92c]
        lea     edx, [eax + eax*2]
        lea     eax, [eax + edx*4]
        lea     ecx, [ecx + eax*4 + 0x37d4]
        add     ecx, 0x14
        push    0x10
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_0041ec50
        ret
    L_96c:
        mov     ecx, dword ptr [ecx + 0x930]
        add     ecx, 0x18
        add     ecx, 0x14
        push    0x10
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_0041ec50
        ret
    }
}
