/*
 * FUN_0075d820 (206 B) — __thiscall constructor (ECX = this), RET 8.
 *
 * Zeroes a local 0x7c-byte buffer, fills in a surface descriptor, calls
 * FUN_00735230 to create the surface, then allocates backing memory.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085a230;
extern int g_008492fc;
extern void __stdcall FUN_00735230(int a, void *b, void *c, int d);
extern void __stdcall FUN_006f4940(int a, int b, int c);

__declspec(naked) void __stdcall FUN_0075d820(void)
{
    __asm {
        sub     esp, 0x7c
        mov     edx, dword ptr [esp + 0x80]
        push    ebx
        mov     ebx, dword ptr [esp + 0x88]
        push    esi
        push    edi
        mov     esi, ecx
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [esp + 0xc]
        rep stosd
        mov     edi, dword ptr [esp + 0x58]
        mov     eax, 0x20
        push    0
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x58], eax
        lea     eax, [esi + 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [g_0085a230]
        push    ecx
        or      edi, 0x41
        push    edx
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x8], 0
        mov     dword ptr [esp + 0x1c], 0x7c
        mov     dword ptr [esp + 0x68], edi
        mov     dword ptr [esp + 0x74], 0xff0000
        mov     dword ptr [esp + 0x78], 0xff00
        mov     dword ptr [esp + 0x7c], 0xff
        mov     dword ptr [esp + 0x80], 0xff000000
        mov     dword ptr [esp + 0x20], 0x1007
        mov     dword ptr [esp + 0x84], 0x1800
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00735230
        mov     eax, dword ptr [esi]
        imul    eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [g_008492fc]
        push    1
        shl     eax, 2
        push    eax
        push    ecx
        call    FUN_006f4940
        pop     edi
        mov     dword ptr [esi + 0x10], 0
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x7c
        ret     8
    }
}
