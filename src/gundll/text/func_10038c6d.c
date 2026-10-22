/*
 * FUN_10038c6d (45 B) — __cdecl.
 * PE header detection: reads the MZ/PE header via GetModuleHandle(NULL)
 * and stores the subsystem bytes into the caller's buffer.
 *
 * CFLAGS: /O1
 */

extern void *g_1004910c;

__declspec(naked) void __cdecl FUN_10038c6d(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x0
        and     dword ptr [esi], 0x0
        call    dword ptr [g_1004910c]
        cmp     word ptr [eax], 0x5a4d
        jnz     done
        mov     ecx, dword ptr [eax + 0x3c]
        test    ecx, ecx
        jz      done
        add     eax, ecx
        mov     cl, byte ptr [eax + 0x1a]
        mov     byte ptr [esi], cl
        mov     al, byte ptr [eax + 0x1b]
        mov     byte ptr [esi + 0x1], al
    done:
        pop     esi
        ret
    }
}
