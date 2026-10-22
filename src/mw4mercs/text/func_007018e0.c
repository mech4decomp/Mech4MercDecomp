/*
 * FUN_007018e0 (143 B) — frees two global linked lists and drains a
 * free-list under a critical section. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void *p);

extern char g_008aaa48[];   /* critical section */

extern void *g_0076b110;    /* IAT: EnterCriticalSection */
extern void *g_0076b100;    /* IAT: LeaveCriticalSection */

extern int g_008aab18;
extern int g_008aab1c;
extern int g_008aaa60;
extern int g_008aaa0c;
extern int g_008aaa10;
extern int g_008aaa08;

__declspec(naked) unsigned int FUN_007018e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_008aab18]
        test    esi, esi
        jz      loc_18f9
loc_18eb:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     loc_18eb
loc_18f9:
        mov     eax, dword ptr [g_008aab1c]
        test    eax, eax
        mov     dword ptr [g_008aab18], 0x0
        pop     esi
        jz      loc_1913
        push    eax
        call    FUN_006f4230
loc_1913:
        mov     eax, dword ptr [g_008aaa60]
        test    eax, eax
        mov     dword ptr [g_008aab1c], 0x0
        jz      loc_196c
        push    offset g_008aaa48
        call    dword ptr [g_0076b110]
        mov     eax, dword ptr [g_008aaa0c]
        test    eax, eax
        jz      loc_1957
        mov     edx, dword ptr [g_008aaa10]
loc_1940:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     dword ptr [eax], edx
        mov     edx, eax
        mov     eax, ecx
        jnz     loc_1940
        mov     dword ptr [g_008aaa0c], eax
        mov     dword ptr [g_008aaa10], edx
loc_1957:
        push    offset g_008aaa48
        mov     dword ptr [g_008aaa08], 0x0
        call    dword ptr [g_0076b100]
loc_196c:
        mov     al, 0x1
        ret
    }
}
