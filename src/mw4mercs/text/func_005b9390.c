/*
 * FUN_005b9390 (217 B) — __thiscall Sensor update (RET 8, 2 params).
 *
 * Calls FUN_005f07c0 (thiscall) and FUN_004db180 (thiscall), then
 * conditionally dispatches to FUN_005b9d00 based on a type field and
 * a float threshold comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07c0(void *param);
extern float __stdcall FUN_004db180(void *param, int a);
extern void __stdcall FUN_005b9d00(void *param, float f);

__declspec(naked) void __stdcall FUN_005b9390(void *param)
{
    

extern int DAT_00786dd0;
extern int DAT_00786dcc;
extern int DAT_00786dc8;
__asm {
push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     ebx, ecx
        push    edi
        mov     ecx, ebp
        call    FUN_005f07c0
        mov     esi, dword ptr [esp + 0x14]
        mov     edi, eax
        push    0x1
        push    esi
        mov     ecx, edi
        call    FUN_004db180
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_done
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        cmp     eax, edi
        jz      L_done
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L_done
        mov     eax, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        sub     eax, 0x6
        jz      L_case6
        dec     eax
        jz      L_case7
        dec     eax
        jnz     L_done
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_00786dd0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_done
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_005b9d00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_case7:
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_00786dcc]
        fnstsw  ax
        test    ah, 0x41
        jz      L_done
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    esi
        mov     ecx, ebx
        call    FUN_005b9d00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_case6:
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_00786dc8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_done
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_005b9d00
L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
