/*
 * FUN_005a34d0 (290 B) — Armor calculation function.
 *
 * Takes 4 stack params, this in ECX. Calls FUN_005f0740, then sums
 * various armor values via FPU, stores results, does a virtual dispatch
 * to determine a divisor, and computes final armor ratio.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(int a1, int a2, int a3, int a4);

__declspec(naked) void __stdcall FUN_005a34d0(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    esi
        push    edx
        mov     ecx, edi
        call    FUN_005f0740
        fld     dword ptr [esi + 0x6C]
        fadd    dword ptr [esi + 0x70]
        mov     ecx, dword ptr [esi + 0x70]
        mov     eax, dword ptr [esi + 0x6C]
        mov     edx, dword ptr [esi + 0x74]
        fadd    dword ptr [esi + 0x78]
        mov     dword ptr [edi + 0x184], ecx
        mov     ecx, dword ptr [esi + 0x80]
        mov     dword ptr [edi + 0x190], ecx
        fadd    dword ptr [esi + 0x7C]
        mov     ecx, dword ptr [esi + 0x88]
        mov     dword ptr [edi + 0x180], eax
        mov     eax, dword ptr [esi + 0x78]
        fadd    dword ptr [esi + 0x88]
        mov     dword ptr [edi + 0x188], edx
        mov     edx, dword ptr [esi + 0x7C]
        mov     dword ptr [edi + 0x19C], ecx
        fadd    dword ptr [esi + 0x74]
        mov     ecx, dword ptr [esi + 0x94]
        mov     dword ptr [edi + 0x18C], eax
        mov     eax, dword ptr [esi + 0x84]
        fadd    dword ptr [esi + 0x80]
        mov     dword ptr [edi + 0x194], edx
        mov     edx, dword ptr [esi + 0x8C]
        mov     dword ptr [edi + 0x1A8], ecx
        fadd    dword ptr [esi + 0x84]
        mov     dword ptr [edi + 0x198], eax
        mov     eax, dword ptr [esi + 0x90]
        lea     ecx, [edi + 0x78]
        fadd    dword ptr [esi + 0x8C]
        mov     dword ptr [edi + 0x1A0], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [edi], 0x784050
        fstp    dword ptr [edi + 0x1AC]
        mov     dword ptr [edi + 0x1A4], eax
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [edi + 0x1A4]
        sub     ecx, 0
        mov     dword ptr [edi + 0x17C], 1
        jz      L_case0
        dec     ecx
        jz      L_case1
        dec     ecx
        jnz     L_done
        ; case 2
        mov     eax, dword ptr [eax + 0x50]
        mov     dword ptr [edi + 0x17C], eax
        jmp     L_done
L_case1:
        mov     ecx, dword ptr [eax + 0x54]
        mov     dword ptr [edi + 0x17C], ecx
        jmp     L_done
L_case0:
        mov     edx, dword ptr [eax + 0x4C]
        mov     dword ptr [edi + 0x17C], edx
L_done:
        fild    dword ptr [edi + 0x17C]
        mov     eax, edi
        fdivr   dword ptr [edi + 0x1AC]
        fstp    dword ptr [edi + 0x1B0]
        pop     edi
        pop     esi
        ret     0x10
    }


}
