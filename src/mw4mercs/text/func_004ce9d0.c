/*
 * FUN_004ce9d0 (108 B) — MLR subsystem: __thiscall/__stdcall (ret 0xc)
 * object constructor. Initializes vtable pointers (0x771bac/0x771bbc),
 * copies type/stream args into the object, and zero-fills a 0x800-dword
 * buffer at [this+0x48]. Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db09c;

extern void FUN_004cc130(void);
extern void FUN_004174d0(void);
extern void FUN_00412780(void);

__declspec(naked) void FUN_004ce9d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007db09c]
        push    ebx
        push    esi
        push    edi
        push    2
        mov     esi, ecx
        push    eax
        call    FUN_004cc130
        lea     edi, [esi+0x14]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_004174d0
        mov     al, byte ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [edi], 0x771bbc
        lea     ecx, [esi+0x30]
        mov     dword ptr [ecx], ebx
        mov     byte ptr [esi+0x34], al
        mov     byte ptr [esi+0x28], al
        mov     eax, dword ptr [esp+0x18]
        mov     word ptr [esi+0x36], bx
        push    eax
        mov     dword ptr [esi], 0x771bac
        mov     dword ptr [esi+0x2c], edx
        call    FUN_00412780
        mov     dword ptr [esi+0x44], ebx
        mov     dword ptr [esi+0x3c], ebx
        lea     edi, [esi+0x48]
        xor     eax, eax
        mov     ecx, 0x800
        rep     stosd
        pop     edi
        mov     dword ptr [esi+0x24], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
