/*
 * FUN_00755D50 (233 B) — __fastcall (ECX = this). Playstream control under a
 * critical section (DAT_00858ac8). Branches on this[0] to either start a
 * stream (FUN_00757F00) or update state via FUN_00749C30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_858ac8[];             /* DAT_00858ac8 critical section */
extern char g_str_7ae4fc[];         /* "Playstream command failed" */
extern void (__stdcall *g_EnterCriticalSection)(void *); /* IAT 0x76b110 */
extern void (__stdcall *g_LeaveCriticalSection)(void *); /* IAT 0x76b100 */

extern void __cdecl FUN_00756350(void);
extern void __cdecl FUN_007560D0(void);
extern void __cdecl FUN_00756C00(void);
extern void __cdecl FUN_00757F00(void);
extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_00749C30(void);

__declspec(naked) void __fastcall FUN_00755D50(void *this)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    offset g_858ac8
        mov     esi, ecx
        call    dword ptr [g_EnterCriticalSection]
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [g_LeaveCriticalSection]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     al, byte ptr [esi + 0x82]
        jz      L_5dd7
        cmp     al, bl
        jz      L_5d7f
        mov     ecx, esi
        call    FUN_00756350
L_5d7f:
        cmp     byte ptr [esi + 0x81], bl
        jnz     L_5d96
        cmp     byte ptr [esi + 0x83], bl
        jnz     L_5d96
        mov     ecx, esi
        call    FUN_007560D0
L_5d96:
        mov     ecx, esi
        mov     byte ptr [esi + 0x83], bl
        call    FUN_00756C00
        mov     eax, dword ptr [esi]
        push    0x1
        push    ebx
        push    ebx
        push    eax
        call    FUN_00757F00
        test    eax, eax
        jz      L_5e21
        push    offset g_str_7ae4fc
        call    FUN_006FAB90
        add     esp, 0x4
        test    eax, eax
        jz      L_5dc5
        int     3
L_5dc5:
        push    offset g_858ac8
        call    edi
        push    offset g_858ac8
        call    edi
        pop     edi
        pop     esi
        pop     ebx
        ret
L_5dd7:
        cmp     al, bl
        jz      L_5de7
        cmp     byte ptr [esi + 0x83], bl
        jz      L_5de7
        push    0x3
        jmp     L_5df5
L_5de7:
        mov     dl, byte ptr [esi + 0x80]
        xor     eax, eax
        cmp     dl, bl
        setnz   al
        push    eax
L_5df5:
        mov     ecx, dword ptr [esi + 0x70]
        mov     edx, dword ptr [ecx + 0xec]
        push    edx
        call    FUN_00749C30
        cmp     byte ptr [esi + 0x81], bl
        jnz     L_5e1b
        cmp     byte ptr [esi + 0x83], bl
        jnz     L_5e1b
        mov     ecx, esi
        call    FUN_007560D0
L_5e1b:
        mov     byte ptr [esi + 0x83], bl
L_5e21:
        push    offset g_858ac8
        mov     byte ptr [esi + 0x82], 0x1
        mov     byte ptr [esi + 0x81], bl
        call    edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
