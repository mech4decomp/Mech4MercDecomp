/*
 * FUN_005DBDF0 (34 B) — Checks a field at this+0x198; if it is -1,
 * pushes 0xEA, calls FUN_00637B40, then FUN_00637A20, and tail-jumps
 * to 0x0075DB4A.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dbdf0(void)
{
    

extern void __cdecl FUN_00637b35(void);
extern void __cdecl FUN_00637a0e(void);
extern void __cdecl FUN_0075db33(void);
__asm {
mov     eax, dword ptr [ecx + 0x198]
        cmp     eax, -1
        jnz     done
        push    0xea
        call FUN_00637b35
        mov     ecx, eax
        call FUN_00637a0e
        jmp FUN_0075db33
    done:
        ret
    }


}
