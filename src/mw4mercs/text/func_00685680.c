/*
 * FUN_00685680 (150 B) — __thiscall (ECX=this), RET 4.
 *
 * Reads/writes two fields of *this via a virtual stream interface
 * (call dword ptr [vtbl+0x20]) and indexes into global tables
 * rooted at 0x7f2440.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2440;

__declspec(naked) void __stdcall FUN_00685680(int param_1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [edi + 0x8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi + 0x4], 0x0
        mov     dword ptr [edi], 0x0
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      L_6856d9
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_7f2440]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [edx + eax*0x4]
        mov     dword ptr [edi], ecx
    L_6856d9:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jz      L_685710
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_7f2440]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [edx + eax*0x4]
        mov     dword ptr [edi + 0x4], ecx
    L_685710:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
