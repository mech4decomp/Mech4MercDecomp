/*
 * FUN_1001c240 (170 B) - __thiscall (1 arg, RET 0x4). HttpEndRequestW
 * wrapper: if *this != 0 reset an event, end request with context this+0x30,
 * wait via FUN_1001c040, and poll WaitForSingleObject until status 100;
 * else end request without context.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210a0;   /* IAT: ResetEvent */
extern void *g_10021028;   /* IAT: WaitForSingleObject */
extern void *g_10021164;   /* IAT: HttpEndRequestW */
extern void __cdecl FUN_1001c040(void);

__declspec(naked) void __cdecl FUN_1001c240(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        cmp     dword ptr [esi], 0x0
        jz      L_c2d0
        mov     eax, dword ptr [esi + 0x3c]
        mov     edi, dword ptr [g_100210a0]
        push    eax
        mov     dword ptr [esi + 0x34], 0x4
        call    edi
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0x40]
        lea     ecx, [esi + 0x30]
        push    ecx
        push    0x9
        push    edx
        push    eax
        call    dword ptr [g_10021164]
        mov     ebx, eax
        lea     eax, [esp + 0xc]
        push    eax
        push    0x0
        mov     ecx, esi
        call    FUN_1001c040
        test    al, al
        jz      L_c2c7
        mov     al, byte ptr [esi + 0x31]
        test    al, al
        jz      L_c2c7
        test    ebx, ebx
        jnz     L_c2bb
        mov     ebx, dword ptr [g_10021028]
L_c29c:
        cmp     dword ptr [esi + 0x38], 0x64
        jz      L_c2bb
        mov     ecx, dword ptr [esi + 0x3c]
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0x3c]
        push    0x1f4
        push    edx
        call    ebx
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jnz     L_c29c
L_c2bb:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        pop     ecx
        ret     4
L_c2c7:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     4
L_c2d0:
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esi + 0x40]
        push    0x0
        push    0x0
        push    eax
        push    esi
        call    dword ptr [g_10021164]
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
