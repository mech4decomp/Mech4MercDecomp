/*
 * FUN_0066c370 (79 B) — __thiscall loader/validator.
 *
 * Calls virtual methods on the object at [esp+4] to fetch a format
 * descriptor; validates it, and on failure calls FUN_006fab90 with a
 * message string and traps (int 3). Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006fab90(char *msg);

__declspec(naked) void FUN_0066c370(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_done
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        cmp     dword ptr [eax], 0x1
        mov     dword ptr [edi + 0x4], eax
        jnz     L_done
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jnz     L_done
        push    0x797128
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_done
        int     3
    L_done:
        pop     edi
        xor     al, al
        pop     esi
        pop     ebp
        ret     0x4
    }
}
