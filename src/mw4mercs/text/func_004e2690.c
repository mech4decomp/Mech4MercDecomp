/*
 * FUN_004e2690 (273 B) — MLR/Adept: zone/location update. __thiscall
 * (ECX = this). Computes a grid index from float coords (FPU), compares
 * against the current element, and dispatches virtual calls to update
 * the renderer element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;
extern float g_0076dd60;
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_004e2690(void)
{
    __asm {
        push    ecx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, dword ptr [edi + 0xd8]
        fld     dword ptr [esi + 0x8c]
        xor     eax, eax
        fld     dword ptr [esi + 0xac]
        mov     al, byte ptr [ecx + 0x16a]
        fsub    dword ptr [ecx + 0x174]
        mov     ebp, dword ptr [esi + 0x10]
        fmul    dword ptr [ecx + 0x178]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        fsub    dword ptr [ecx + 0x16c]
        and     edx, 0xff
        imul    eax, edx
        fmul    dword ptr [ecx + 0x170]
        mov     ecx, dword ptr [ecx + 0x17c]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0xc]
        and     edx, 0xff
        add     eax, edx
        mov     edx, eax
        shl     edx, 0x5
        add     edx, eax
        lea     eax, [eax + edx*0x4]
        lea     eax, [ecx + eax*0x4]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x14], eax
        jnz     loc_4e2732
        mov     edx, dword ptr [edi + 0x10]
        and     edx, 0x1f000
        cmp     edx, 0x10000
        jnz     loc_4e2793
loc_4e2732:
        lea     ecx, [edi + 0x20]
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_4e2745
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
loc_4e2745:
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebp]
        push    ebx
        mov     ebx, dword ptr [edi + 0x10]
        push    esi
        mov     ecx, ebp
        and     ebx, 0x180
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x8]
        mov     ecx, dword ptr [edi + 0x10]
        and     ecx, 0x180
        cmp     ebx, ecx
        pop     ebx
        jnz     loc_4e2793
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], edx
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x40]
loc_4e2793:
        and     dword ptr [edi + 0x10], 0xfffffdff
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret     0x4
    }
}
