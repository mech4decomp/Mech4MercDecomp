/*
 * FUN_1001be70 (18 B) - if (*(*(ECX+0x74)+0xc)) != 0, call SetEvent on it.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_SetEvent)(void *);

__declspec(naked) void __cdecl FUN_1001be70(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x74]
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        jz      done
        push    eax
        call    dword ptr [g_SetEvent]
done:
        ret
    }
}
