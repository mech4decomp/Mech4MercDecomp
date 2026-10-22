/*
 * FUN_006FA970 (133 B) — __cdecl RET (no args). Log subsystem helper:
 * calls FUN_00713920, searches a linked list (g_00849ec0) for a matching
 * 0x18-byte key (repe cmpsb), and inserts a new node (via FUN_006F3C80)
 * into the list, updating g_00849ec0/g_00849ec4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849ec0;
extern int g_00849ec4;

extern void __cdecl FUN_00713920(void);
extern void __cdecl FUN_006F3C80(void);

__declspec(naked) void FUN_006FA970(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    2
        push    5
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_00713920
        mov     eax, dword ptr [g_00849ec0]
        test    eax, eax
        mov     ebx, eax
        je      L6fa9b2
    L6fa98f:
        mov     ecx, 0x18
        lea     edi, [eax + 4]
        lea     esi, [esp + 0xc]
        xor     edx, edx
        repe cmpsb
        mov     ebx, eax
        je      L6fa9a8
        sbb     edx, edx
        sbb     edx, -1
    L6fa9a8:
        test    edx, edx
        je      L6fa9ee
        mov     eax, dword ptr [eax]
        test    eax, eax
        jne     L6fa98f
    L6fa9b2:
        push    0
        push    0x1c
        call    FUN_006F3C80
        mov     edx, dword ptr [g_00849ec4]
        lea     edi, [eax + 4]
        mov     ecx, 6
        lea     esi, [esp + 0xc]
        inc     edx
        test    ebx, ebx
        rep movsd
        mov     dword ptr [eax], 0
        mov     dword ptr [g_00849ec4], edx
        je      L6fa9e9
        pop     edi
        pop     esi
        mov     dword ptr [ebx], eax
        pop     ebx
        add     esp, 0x18
        ret
    L6fa9e9:
        mov     dword ptr [g_00849ec0], eax
    L6fa9ee:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
