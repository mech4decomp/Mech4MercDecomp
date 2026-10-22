/*
 * 85 bytes — __thiscall destructor.
 * Calls constructor/cleanup pairs on 4 sub-objects at offsets
 * +0x14, +0x1C, +0x24, +0x2C, then calls cleanup on this.
 */

void FUN_004179F0(void);
void FUN_00417980(void);
void FUN_004169C0(void);

__declspec(naked) void FUN_005947C0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, dword ptr [esi + 0x14]
        mov     ecx, edi
        call    FUN_004179F0
        lea     ebx, dword ptr [esi + 0x1C]
        mov     ecx, ebx
        call    FUN_004179F0
        lea     ebp, dword ptr [esi + 0x24]
        mov     ecx, ebp
        call    FUN_004179F0
        lea     ecx, dword ptr [esi + 0x2C]
        call    FUN_004179F0
        lea     ecx, dword ptr [esi + 0x2C]
        call    FUN_00417980
        mov     ecx, ebp
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004169C0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
