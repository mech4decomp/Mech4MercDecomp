/*
 * FUN_006A6C20 (121 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * FPU accumulator loop over an array of objects (stride 4), calling a
 * virtual method (vtable[0]) per element and accumulating weighted sums
 * into two stack slots, returning their ratio in st(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006A6C20(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [ecx + 0x14]
        push    ebx
        push    esi
        sub     eax, dword ptr [ecx + 0x10]
        xor     ebx, ebx
        sar     eax, 2
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        je      L6a6c89
        mov     esi, dword ptr [ecx + 4]
        push    ebp
        mov     ebp, dword ptr [ecx + 0x10]
        push    edi
        mov     edi, dword ptr [ecx + 0x14]
        sub     edi, ebp
        sar     edi, 2
        sub     ebp, esi
    L6a6c54:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esi + ebp]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    dword ptr [edx]
        fmul    dword ptr [esi]
        inc     ebx
        add     esi, 4
        cmp     ebx, edi
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [esp + 0x14]
        jb      L6a6c54
        pop     edi
        pop     ebp
    L6a6c89:
        fld     dword ptr [esp + 8]
        pop     esi
        fdiv    dword ptr [esp + 8]
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
