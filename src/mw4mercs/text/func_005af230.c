/*
 * FUN_005af230 (29 B) — __fastcall (ECX = this). Walks a linked list at
 * [this+0x178]; for each node whose [node] is non-null, calls the virtual
 * method at vtable+0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005af230(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x178]
top:
        test    esi, esi
        jz      done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      done
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x18]
        jmp     top
done:
        pop     esi
        ret
    }
}
