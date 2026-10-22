/*
 * FUN_00760e30 (18 B) — __cdecl, one param.
 * If param != 0, forwards it to FUN_0075db62; otherwise returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db62(void *param);

__declspec(naked) void __cdecl FUN_00760e30(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_0075db62
        add     esp, 4
    done:
        ret
    }
}
