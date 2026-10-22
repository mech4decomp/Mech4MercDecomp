/*
 * ZlogLib.dll - FUN_10001a1d (0x10001A1D, 460 B, __cdecl)
 * Log object setup/teardown. Copies config fields into globals and
 * initializes the message buffers via strncpy (function ptr at 0x10003040).
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern unsigned int g_10006c0c;
extern unsigned int g_10004304;
extern unsigned int g_10004014;
extern unsigned int g_10004300;
extern unsigned int g_10004010;
extern unsigned int g_10005108;
extern unsigned int g_100274a0;
extern unsigned int g_100274a4;
extern unsigned int g_100274a8;
extern void *g_10003040;          /* strncpy function pointer */
extern char g_1000510c[];
extern char g_10004908[];
extern char g_10004508[];
extern char g_10004308[];
extern char g_10004408[];
extern char g_1000550c[];
extern char g_100065cc[];
extern char g_1000658c[];
extern char g_100270a0[];
extern char g_1000550b;
extern char g_10004d07;
extern char g_10004907;
extern char g_10004407;
extern char g_10004507;
extern char g_1000590b;
extern char g_10006c0b;
extern char g_100065cb;
extern char g_1002749f;
extern char g_10004284[];
extern char g_1000426c[];
extern char g_10004268[];
extern char * __cdecl FUN_10002931(void);
extern int __cdecl FUN_10001000(void);

__declspec(naked) int FUN_10001a1d(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        jz L_baa
        mov ecx, dword ptr [g_10006c0c]
        cmp ecx, ebx
        jz L_a48
        cmp dword ptr [g_10004304], ebx
        jnz L_a48
        push 0x2
        jmp L_bde
    L_a48:
        mov eax, dword ptr [esi + 0xcac]
        cmp eax, ebx
        jnz L_a5e
        cmp dword ptr [esi + 0xcb0], ebx
        jz L_baa
    L_a5e:
        cmp ecx, ebx
        mov edi, dword ptr [g_10003040]
        mov ebp, 0x3ff
        jnz L_b73
        mov dword ptr [g_10004014], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [g_10004300], eax
        mov eax, dword ptr [esi]
        mov dword ptr [g_10004010], eax
        mov eax, dword ptr [esi + 0x628]
        mov dword ptr [g_10005108], eax
        mov eax, dword ptr [esi + 0x18]
        mov dword ptr [g_100274a0], eax
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [g_100274a4], eax
        mov eax, dword ptr [esi + 0x20]
        mov dword ptr [g_100274a8], eax
        push ebp
        lea eax, [esi + 0x228]
        push eax
        push offset g_1000510c
        call edi
        and byte ptr [g_1000550b], 0
        push ebp
        lea eax, [esi + 0x28]
        push eax
        push offset g_10004908
        call edi
        and byte ptr [g_10004d07], 0
        push ebp
        lea eax, [esi + 0xaac]
        push eax
        mov ebx, offset g_10004508
        push ebx
        call edi
        and byte ptr [g_10004907], 0
        lea eax, [esi + 0xa2c]
        push 0xff
        push eax
        push offset g_10004308
        call edi
        and byte ptr [g_10004407], 0
        push 0xff
        lea eax, [esi + 0xa6c]
        push eax
        push offset g_10004408
        call edi
        and byte ptr [g_10004507], 0
        add esp, 0x3c
        push ebp
        lea eax, [esi + 0xa2c]
        push eax
        push ebx
        push offset g_10004284
        call FUN_10002931
        add esp, 0xc
        push eax
        push offset g_1000550c
        call edi
        and byte ptr [g_1000590b], 0
        add esp, 0xc
        push 0x63f
        push offset g_10004408
        push ebx
        push offset g_1000426c
        call FUN_10002931
        add esp, 0xc
        push eax
        push offset g_100065cc
        call edi
        and byte ptr [g_10006c0b], 0
        add esp, 0xc
        xor ebx, ebx
    L_b73:
        mov eax, dword ptr [esi + 0xcb0]
        push 0x3f
        mov dword ptr [g_10004304], eax
        push dword ptr [esi + 0x24]
        push offset g_10004268
        call FUN_10002931
        pop ecx
        pop ecx
        push eax
        push offset g_1000658c
        call edi
        and byte ptr [g_100065cb], 0
        add esp, 0xc
        call FUN_10001000
        test eax, eax
        jz L_bb4
    L_baa:
        mov dword ptr [g_10006c0c], ebx
        xor eax, eax
        jmp L_be4
    L_bb4:
        cmp dword ptr [g_10006c0c], ebx
        jnz L_bdc
        cmp dword ptr [g_10004014], 0x3
        jnz L_bdc
        push ebp
        push offset g_10004908
        push offset g_100270a0
        call edi
        add esp, 0xc
        and byte ptr [g_1002749f], 0
    L_bdc:
        push 0x1
    L_bde:
        pop eax
        mov dword ptr [g_10006c0c], eax
    L_be4:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
