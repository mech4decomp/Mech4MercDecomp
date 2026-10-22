/*
 * FUN_1001c1c0 (123 B) - __thiscall (2 args, RET 0x8). HttpSendRequestExW
 * wrapper: if *this != 0 reset an event, send with context this+0x30 and
 * wait via FUN_1001c040; else send without context.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210a0;   /* IAT: ResetEvent */
extern void *g_10021180;   /* IAT: HttpSendRequestExW */
extern void __cdecl FUN_1001c040(void);

__declspec(naked) void __cdecl FUN_1001c1c0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi], 0x0
        jz      L_c21e
        mov     eax, dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x34], 0x3
        push    eax
        call    dword ptr [g_100210a0]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        lea     ecx, [esi + 0x30]
        push    ecx
        mov     ecx, dword ptr [esi + 0x40]
        push    0x9
        push    edx
        push    eax
        push    ecx
        call    dword ptr [g_10021180]
        lea     edx, [esp + 0x4]
        mov     ecx, esi
        push    edx
        push    0x0
        call    FUN_1001c040
        test    al, al
        jz      L_c217
        mov     al, byte ptr [esi + 0x31]
        test    al, al
        jz      L_c217
        mov     eax, 0x1
        pop     esi
        pop     ecx
        ret     8
L_c217:
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     8
L_c21e:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [esi + 0x40]
        push    0x0
        push    0x0
        push    eax
        push    ecx
        push    esi
        call    dword ptr [g_10021180]
        pop     esi
        pop     ecx
        ret     8
    }
}
