/*
 * FUN_00694680 (433 B) - HUD element constructor (__fastcall, this in ECX,
 * RET 0x4). Initializes four sub-objects, copies a string, and registers
 * three named sub-elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_799480[];
extern char g_799478[];
extern char g_799470[];
extern void *g_76b28c;   /* IAT: memmove-like helper */

extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_006942d0(void);
extern void __cdecl FUN_005cbd00(void);

__declspec(naked) void FUN_00694680(void *param_1)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x17]
        xor     edi, edi
        push    ecx
        lea     ecx, [ebp + 0x8]
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, ebp
        call    FUN_005634e0
        mov     edx, dword ptr [ebp + 0x4]
        lea     eax, [esp + 0x14]
        lea     ebx, [ebp + 0xc]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [ebx + 0x8]
        mov     byte ptr [edx], 0x0
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, ebx
        call    FUN_005634e0
        mov     edx, dword ptr [ebx + 0x4]
        lea     eax, [esp + 0x14]
        lea     esi, [ebp + 0x18]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esi + 0x8]
        mov     byte ptr [edx], 0x0
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, esi
        call    FUN_005634e0
        mov     edx, dword ptr [esi + 0x4]
        lea     eax, [esp + 0x14]
        lea     esi, [ebp + 0x24]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esi + 0x8]
        mov     byte ptr [edx], 0x0
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, esi
        call    FUN_005634e0
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        or      ecx, 0xffffffff
        mov     byte ptr [edx], 0x0
        mov     edx, dword ptr [eax + 0x14]
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     edi, dword ptr [ebp]
        not     ecx
        dec     ecx
        add     ecx, edx
        mov     eax, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [ebp + 0x4]
        sub     eax, edx
        sub     ecx, edi
        mov     dword ptr [esp + 0x18], ecx
        cmp     eax, ecx
        ja      loc_6947a3
        mov     ecx, eax
        mov     esi, edx
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        lea     esi, [ecx + eax*0x1]
        mov     eax, dword ptr [ebp + 0x4]
        cmp     esi, eax
        jz      loc_6947cb
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 0x1]
        push    ecx
        push    eax
        push    esi
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        add     edi, esi
        mov     dword ptr [ebp + 0x4], edi
        jmp     loc_6947cb
loc_6947a3:
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        add     ecx, edx
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_005cbd00
loc_6947cb:
        mov     ecx, dword ptr [esp + 0x20]
        push    offset g_799480
        call    FUN_00411a10
        test    eax, eax
        jz      loc_6947e7
        push    ebx
        push    eax
        call    FUN_006942d0
        add     esp, 0x8
loc_6947e7:
        mov     esi, dword ptr [esp + 0x20]
        push    offset g_799478
        mov     ecx, esi
        call    FUN_00411a10
        test    eax, eax
        jz      loc_694808
        lea     ecx, [ebp + 0x18]
        push    ecx
        push    eax
        call    FUN_006942d0
        add     esp, 0x8
loc_694808:
        push    offset g_799470
        mov     ecx, esi
        call    FUN_00411a10
        test    eax, eax
        jz      loc_694825
        lea     ecx, [ebp + 0x24]
        push    ecx
        push    eax
        call    FUN_006942d0
        add     esp, 0x8
loc_694825:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
