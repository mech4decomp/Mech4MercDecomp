/*
 * FUN_0062c3e0 (411 B) - __fastcall (ECX = this), RET.
 * Object constructor: initializes fields, allocates several 0x138-byte
 * sub-objects via FUN_00560190, and calls FUN_00560420 to configure them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561430(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00707e70(void);

extern int g_7ddde0;
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __fastcall FUN_0062c3e0(void)
{
    __asm {
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, 0x3f666666
        xor     edx, ecx
        mov     edi, dword ptr [edx + 0xc]
        xor     ebp, ebp
        mov     dword ptr [esi], 0x78d0f4
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x14], ebp
        mov     dword ptr [esi + 0x18], ebp
        push    0x138
        mov     dword ptr [esi + 0x20], 0x44480000
        mov     dword ptr [esi + 0x24], 0x44160000
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x34], 0xffffffff
        xor     edi, 0x85739531
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lc455
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     Lc457
Lc455:
        xor     ebx, ebx
Lc457:
        push    ebp
        push    ebp
        push    0x76b768
        mov     ecx, ebx
        mov     dword ptr [esi + 0x50], ebx
        call    FUN_00560420
        mov     eax, dword ptr [ebx]
        push    0x3
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lc48e
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     Lc490
Lc48e:
        xor     ebx, ebx
Lc490:
        mov     edx, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x2da
        mov     ecx, edi
        mov     dword ptr [esi + 0x54], ebx
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     eax, dword ptr [ebx]
        push    0x4
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lc4cf
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     Lc4d1
Lc4cf:
        xor     ebx, ebx
Lc4d1:
        mov     edx, dword ptr [edi]
        push    ebp
        push    ebp
        push    0x30d
        mov     ecx, edi
        mov     dword ptr [esi + 0x58], ebx
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     eax, dword ptr [ebx]
        push    0x4
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lc510
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     Lc512
Lc510:
        xor     edi, edi
Lc512:
        push    ebp
        push    ebp
        push    0x76b768
        mov     ecx, edi
        mov     dword ptr [esi + 0x5c], edi
        call    FUN_00560420
        mov     edx, dword ptr [edi]
        push    0x4
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lc549
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     Lc54b
Lc549:
        xor     edi, edi
Lc54b:
        push    ebp
        push    ebp
        push    0x76b768
        mov     ecx, edi
        mov     dword ptr [esi + 0x60], edi
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0x4
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        push    ebp
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x64]
        mov     dword ptr [esi + 0x6c], ebp
        pop     edi
        mov     dword ptr [esi + 0x70], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
