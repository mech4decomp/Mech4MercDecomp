/*
 * FUN_005c0d10 (327 B) — __cdecl, RET (no stack cleanup).
 *
 * Iterates over an array of items, filtering and growing a result list
 * (vector-style reallocation). Uses ESP-based locals (no EBP frame).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_0041fd80(void *this);
extern char __stdcall FUN_00415230(void *param);
extern void *FUN_004084d0(unsigned int size);
extern void FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005c0d10(void *param1, void *param2)
{
    

extern int DAT_007f268c;
__asm {
sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], 0x20
outer:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      next
        lea     ecx, [eax + 0x10]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      next
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     next
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     next
        mov     edx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [edx + 0x4]
        cmp     edi, dword ptr [edx + 0x8]
        jz      grow
        test    edi, edi
        jz      skipstore
        mov     dword ptr [edi], esi
skipstore:
        add     edi, 0x4
        mov     dword ptr [edx + 0x4], edi
        jmp     next
grow:
        mov     ebp, dword ptr [edx]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x14]
        jc      sel
        lea     ecx, [esp + 0x18]
sel:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jz      alloc0
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4
        mov     ebx, eax
        jmp     copy
alloc0:
        xor     ebx, ebx
copy:
        cmp     ebp, edi
        mov     eax, ebx
        jz      aftercopy
        mov     ecx, ebp
copyloop:
        test    eax, eax
        jz      copyinc
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x24]
copyinc:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edi
        jnz     copyloop
aftercopy:
        test    eax, eax
        jz      afterstore
        mov     dword ptr [eax], esi
afterstore:
        cmp     edi, edi
        lea     esi, [eax + 0x4]
        jz      freeold
        mov     eax, edi
        sub     eax, esi
shiftloop:
        test    esi, esi
        jz      shiftinc
        mov     ecx, dword ptr [eax + esi]
        mov     dword ptr [esi], ecx
shiftinc:
        add     esi, 0x4
        lea     ecx, [eax + esi]
        cmp     ecx, edi
        jnz     shiftloop
freeold:
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ebp
        jz      store
        push    ebp
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4
store:
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [ebx + eax*4]
        mov     dword ptr [edx], ebx
        mov     dword ptr [edx + 0x4], esi
        mov     dword ptr [edx + 0x8], ecx
next:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x10], eax
        jnz     outer
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }


}
