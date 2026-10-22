/*
 * FUN_005f35f0 (202 B) — Constructor (__thiscall, RET 0x10, 4 stack params).
 *
 * Calls FUN_005f8320(param1..param4) on this, initializes two sub-objects at
 * +0x4a8 and +0x4b4 (vtable 0x77ceac), sets vtable 0x78a618, calls
 * FUN_00637ac0 and FUN_005f37e0(param2), then zeroes a batch of fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f8320(void);
extern void FUN_0041fc80(void);
extern void FUN_00637ac0(void);
extern void FUN_005f37e0(void);

__declspec(naked) void __fastcall FUN_005f35f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        push    edx
        mov     ecx, esi
        call    FUN_005f8320
        lea     edi, [esi + 0x4a8]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi + 0x4b4]
        push    ebx
        mov     ecx, edi
        mov     word ptr [esi + 0x4b0], 0xffff
        mov     word ptr [esi + 0x4b2], bx
        call    FUN_0041fc80
        or      eax, 0xffffffff
        mov     dword ptr [edi], 0x77ceac
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x4f4], eax
        mov     dword ptr [esi + 0x4f8], eax
        mov     dword ptr [esi + 0x500], ebx
        mov     dword ptr [esi], 0x78a618
        call    FUN_00637ac0
        push    ebp
        mov     ecx, esi
        call    FUN_005f37e0
        pop     edi
        mov     dword ptr [esi + 0x504], ebx
        mov     dword ptr [esi + 0x3b0], ebx
        mov     dword ptr [esi + 0x508], ebx
        mov     dword ptr [esi + 0x50c], ebx
        mov     dword ptr [esi + 0x4c8], ebx
        mov     byte ptr [esi + 0x510], bl
        mov     dword ptr [esi + 0x4cc], 0x8
        mov     dword ptr [esi + 0x458], 0x41a00000
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
