/*
 * FUN_005a1460 (61 B) — Lazy initialization helper.
 *
 * __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_0041fd80(void);
extern void   __stdcall FUN_005fa610(int, int, int);
extern void   __stdcall FUN_0041fcd0(void *);

__declspec(naked) void __fastcall FUN_005a1460(int this_ptr)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x520]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     done
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        push    0x0
        push    esi
        add     eax, 0x2f8
        push    eax
        mov     ecx, esi
        call    FUN_005fa610
        test    eax, eax
        jz      done
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
done:
        pop     edi
        pop     esi
        ret
    }
}
