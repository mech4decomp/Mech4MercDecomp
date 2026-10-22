/*
 * FUN_005eef30 (58 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Calls FUN_005f08f0 and FUN_005eeeb0, then on this+0x1a4 calls
 * FUN_0041fd80 twice and zeroes a field if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f08f0(void *a);
extern void __stdcall FUN_005eeeb0(void *a);
extern void * __stdcall FUN_0041fd80(void *a);

__declspec(naked) void __stdcall FUN_005eef30(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005f08f0
        push    edi
        mov     ecx, esi
        call    FUN_005eeeb0
        add     esi, 0x1a4
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      done
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [eax + 0x48], 0x0
done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
