/*
 * FUN_005afd20 (230 B) — __thiscall constructor, RET 0x10.
 *
 * Calls base constructor FUN_005b1140(param_1..param_4), sets the vtable
 * (0x785db4) and a batch of member fields, then resolves four joint names
 * via FUN_005f8fa0 (thiscall, __stdcall arg) and stores the results.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b1140(void *this, int a, int b, int c, int d);
extern int FUN_005f8fa0(void *this, const char *name);

__declspec(naked) void __stdcall FUN_005afd20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005b1140
        xor     ebx, ebx
        mov     dword ptr [esi + 0x61c], ebx
        push    0x783c84
        mov     ecx, esi
        mov     dword ptr [esi], 0x785db4
        mov     byte ptr [esi + 0x624], bl
        mov     dword ptr [esi + 0x5e8], 4
        mov     dword ptr [esi + 0x5f4], ebx
        mov     byte ptr [esi + 0x608], 1
        mov     dword ptr [esi + 0x620], ebx
        call    FUN_005f8fa0
        push    0x783c74
        mov     ecx, esi
        mov     dword ptr [esi + 0x5f8], eax
        call    FUN_005f8fa0
        push    0x783c64
        mov     ecx, esi
        mov     dword ptr [esi + 0x5fc], eax
        call    FUN_005f8fa0
        push    0x783c54
        mov     ecx, esi
        mov     dword ptr [esi + 0x600], eax
        call    FUN_005f8fa0
        cmp     dword ptr [esi + 0x5f8], ebx
        mov     dword ptr [esi + 0x604], eax
        mov     byte ptr [esi + 0x609], bl
        jz      LDE1
        cmp     dword ptr [esi + 0x5fc], ebx
        jz      LDE1
        cmp     dword ptr [esi + 0x600], ebx
        jz      LDE1
        cmp     eax, ebx
        jz      LDE1
        mov     byte ptr [esi + 0x609], 1
LDE1:
        mov     dword ptr [esi + 0x60c], ebx
        mov     dword ptr [esi + 0x610], ebx
        mov     dword ptr [esi + 0x614], ebx
        mov     dword ptr [esi + 0x618], ebx
        mov     byte ptr [esi + 0x625], bl
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
