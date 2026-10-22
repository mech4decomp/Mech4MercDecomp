/*
 * FUN_005444E0 (257 B) — Stream setup/read function (variant 2).
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084c0(int, int);
extern int __stdcall FUN_004084d0(int);
extern void __stdcall FUN_004084e0(int);
extern int __stdcall FUN_0041e690(int, int, int);

__declspec(naked) void __stdcall FUN_005444e0(int param_1, int param_2)
{
    

extern int DAT_007dd234;
__asm {
mov     eax, dword ptr [esp + 0x4]
        imul    eax, eax, 0x22ac
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + ecx + 0x205d24]
        lea     ebp, [eax + ecx]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      loc_54452f
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [eax + 0x4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        cmp     esi, edi
        jz      loc_544529
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]

loc_544529:
        mov     dword ptr [ebp + 0x205d24], edi

loc_54452f:
        mov     ecx, dword ptr [ebp + 0x205d28]
        cmp     ecx, edi
        jz      loc_544545
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [ebp + 0x205d28], edi

loc_544545:
        mov ecx, dword ptr [DAT_007dd234]
        mov     ebx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [ebx + 0x1c]
        push    ecx
        push    edi
        call    FUN_004084c0
        push    0x20
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0xc
        test    eax, eax
        jz      loc_544578
        push    0x0
        push    edi
        push    esi
        mov     ecx, eax
        call    FUN_0041e690
        mov     esi, eax
        jmp     loc_54457a

loc_544578:
        xor     esi, esi

loc_54457a:
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ebp + 0x205d24], esi
        mov     ebp, dword ptr [esi]
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebp + 0x24]
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     ebp, 0xffffffec
        xor     ebx, ebx
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esi + 0x8], ebp
        jbe     loc_5445ce

loc_5445ac:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0x1c]
        and     ecx, 0xff
        add     ebx, ecx
        inc     edi
        cmp     edi, eax
        jb      loc_5445ac

loc_5445ce:
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        pop     edi
        mov     dword ptr [esi + 0x8], ebp
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
