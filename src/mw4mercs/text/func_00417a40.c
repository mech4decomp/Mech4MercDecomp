/*
 * FUN_00417a40 (17 B) — linked-list length counter. Walks a singly-linked
 * list (head at [ECX], next pointer at +4) counting nodes until null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_00417a40(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        xor     eax, eax
        test    ecx, ecx
        jz      done
    walk:
        mov     ecx, dword ptr [ecx + 0x4]
        inc     eax
        test    ecx, ecx
        jnz     walk
    done:
        ret
    }
}
