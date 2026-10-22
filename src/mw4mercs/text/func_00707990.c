/*
 * FUN_00707990 (210 B) - Global state initialization.
 *
 * __cdecl, no args, RET.
 *
 * Calls an IAT function (0x76B220) with a pointer to string 0x858B38,
 * then calls FUN_00707F50 which returns a 64-bit value in EDX:EAX.
 * Copies that value into a set of global slots (0x858B30/34,
 * 0x859B48/4C, 0x859B50/54, 0x858B50/54, 0x858B40/44), increments it,
 * and zeroes a large set of globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858b38[];
extern void *g_76b220;
extern void __cdecl FUN_00707f50(void);
extern int g_858b30;
extern int g_858b34;
extern int g_859b48;
extern int g_859b4c;
extern int g_859b50;
extern int g_859b54;
extern int g_858b50;
extern int g_858b54;
extern int g_858b04;
extern int g_858b40;
extern int g_858b44;
extern int g_858b80;
extern int g_858b84;
extern int g_858b78;
extern int g_858b7c;
extern int g_858b68;
extern int g_858b6c;
extern int g_858b70;
extern int g_858b74;
extern int g_858b88;
extern int g_858b8c;
extern int g_858afc;
extern int g_858b28;
extern int g_858b2c;
extern int g_858b00;
extern int g_858b60;

__declspec(naked) void FUN_00707990(void)
{
    __asm {
        push    esi
        push    offset g_858b38
        call    dword ptr [g_76b220]
        call    FUN_00707f50
        mov     dword ptr [g_858b30], eax
        mov     dword ptr [g_858b34], edx
        mov     dword ptr [g_859b48], eax
        mov     dword ptr [g_859b4c], edx
        mov     ecx, dword ptr [g_859b48]
        mov     esi, dword ptr [g_859b4c]
        mov     dword ptr [g_859b50], ecx
        mov     dword ptr [g_859b54], esi
        mov     ecx, dword ptr [g_859b50]
        mov     esi, dword ptr [g_859b54]
        mov     dword ptr [g_858b50], ecx
        mov     ecx, 0
        add     eax, 1
        adc     edx, ecx
        mov     dword ptr [g_858b54], esi
        mov     dword ptr [g_858b04], 0
        mov     dword ptr [g_858b40], eax
        mov     dword ptr [g_858b44], edx
        mov     dword ptr [g_858b80], ecx
        mov     dword ptr [g_858b84], ecx
        mov     dword ptr [g_858b78], ecx
        mov     dword ptr [g_858b7c], ecx
        mov     dword ptr [g_858b68], ecx
        mov     dword ptr [g_858b6c], ecx
        mov     dword ptr [g_858b70], ecx
        mov     dword ptr [g_858b74], ecx
        mov     dword ptr [g_858b88], ecx
        mov     dword ptr [g_858b8c], ecx
        mov     dword ptr [g_858afc], ecx
        mov     dword ptr [g_858b28], ecx
        mov     dword ptr [g_858b2c], ecx
        mov     dword ptr [g_858b00], ecx
        mov     dword ptr [g_858b60], ecx
        pop     esi
        ret
    }
}
