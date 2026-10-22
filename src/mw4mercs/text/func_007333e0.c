/*
 * FUN_007333e0 (41 B) — Iterates a linked list (head at 0x00857F38) while a
 * global flag (0x008AA288) is clear, calling FUN_00734a40 (thiscall, ECX =
 * node->field_0xC) for each node whose field_0xC is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8aa288;
extern void *g_857f38;
extern void __cdecl FUN_00734a40(void);

__declspec(naked) void FUN_007333e0(void)
{
    __asm {
        mov     al, byte ptr [g_8aa288]
        test    al, al
        push    esi
        jnz     done
        mov     esi, dword ptr [g_857f38]
again:
        test    esi, esi
        mov     eax, esi
        jz      done
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      done
        call    FUN_00734a40
        jmp     again
done:
        pop     esi
        ret
    }
}
