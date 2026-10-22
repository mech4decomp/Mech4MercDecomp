/*
 * FUN_004e7640 (160 B) — MLR/Adept __thiscall constructor: fills a config
 * struct from 13 stack params + two globals (0x7dc694 byte / 0x7dc696
 * word), copies a 0xc-dword block, and constructs two sub-objects at
 * +0x60/+0x78 via FUN_00767400. __thiscall, RET 0x34.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767400(void);

extern char  g_007dc694;   /* DAT_007dc694 */
extern short g_007dc696;   /* DAT_007dc696 */

__declspec(naked) void FUN_004e7640(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0xc], edx
        mov     dl, byte ptr [g_007dc694]
        mov     dword ptr [ebx + 0x14], ecx
        mov     dword ptr [ebx + 0x10], eax
        mov     ax, word ptr [g_007dc696]
        mov     byte ptr [ebx + 0x18], dl
        mov     edx, dword ptr [esp + 0x28]
        push    edi
        mov     word ptr [ebx + 0x1a], ax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x4], 0x2
        lea     edi, [ebx + 0x1c]
        mov     ecx, 0xc
        rep     movsd
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [ebx + 0x4c], ecx
        mov     cx, word ptr [eax]
        mov     dword ptr [ebx + 0x50], edx
        mov     dx, word ptr [eax + 0x2]
        mov     eax, dword ptr [esp + 0x38]
        mov     word ptr [ebx + 0x54], cx
        mov     ecx, dword ptr [esp + 0x34]
        mov     word ptr [ebx + 0x56], dx
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [ebx + 0x5c], ecx
        push    edx
        lea     ecx, [ebx + 0x60]
        mov     dword ptr [ebx + 0x58], eax
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        lea     ecx, [ebx + 0x78]
        call    FUN_00767400
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x34
    }
}
