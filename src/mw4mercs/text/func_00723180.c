/*
 * FUN_00723180 (473 B) — Getter that fills up to 6 output pointers with
 * configuration values, selected by mode flags (DAT_0085b4a0, DAT_0087bc34,
 * DAT_0087bc35, DAT_008aaea4).
 *
 * __stdcall RET 0x18 (6 pointer params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85b4a0;
extern unsigned char g_87bc35;
extern unsigned char g_87bc34;
extern int g_87dd3c;
extern int g_87dd38;
extern int g_87dd4c;
extern int g_87dd48;
extern int g_87dd44;
extern int g_87dd28;
extern int g_85b490;
extern int g_8aaea4;
extern int g_87dd54;
extern int g_87dd58;
extern int g_87dd5c;

__declspec(naked) void __stdcall FUN_00723180(void *param_1, void *param_2,
                                              void *param_3, void *param_4,
                                              void *param_5, void *param_6)
{
    __asm {
        cmp     dword ptr [g_85b4a0], 1
        jnz     L_259
        mov     al, byte ptr [g_87bc35]
        test    al, al
        jz      L_1fd
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_1a6
        mov     ecx, dword ptr [g_87dd3c]
        mov     dword ptr [eax], ecx
    L_1a6:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_1b6
        mov     edx, dword ptr [g_87dd38]
        mov     dword ptr [eax], edx
    L_1b6:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_1c6
        mov     ecx, dword ptr [g_87dd4c]
        mov     dword ptr [eax], ecx
    L_1c6:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_1d6
        mov     edx, dword ptr [g_87dd48]
        mov     dword ptr [eax], edx
    L_1d6:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_1e6
        mov     ecx, dword ptr [g_87dd44]
        mov     dword ptr [eax], ecx
    L_1e6:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_356
        mov     edx, dword ptr [g_87dd28]
        mov     dword ptr [eax], edx
        ret     0x18
    L_1fd:
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        mov     eax, dword ptr [g_85b490]
        jz      L_20f
        mov     edx, dword ptr [eax + 0x10]
        mov     dword ptr [ecx], edx
    L_20f:
        mov     ecx, dword ptr [esp + 8]
        test    ecx, ecx
        jz      L_21c
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [ecx], edx
    L_21c:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        jz      L_229
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [ecx], edx
    L_229:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jz      L_236
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx], edx
    L_236:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_243
        mov     edx, dword ptr [eax + 0x20]
        mov     dword ptr [ecx], edx
    L_243:
        mov     ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jz      L_356
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x24]
        mov     dword ptr [ecx], edx
        ret     0x18
    L_259:
        mov     al, byte ptr [g_87bc34]
        test    al, al
        mov     dl, byte ptr [g_87bc35]
        jz      L_2d6
        test    dl, dl
        jnz     L_2d6
        mov     eax, dword ptr [g_8aaea4]
        test    eax, eax
        jnz     L_2d6
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_285
        mov     ecx, dword ptr [g_87dd54]
        mov     dword ptr [eax], ecx
    L_285:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_295
        mov     edx, dword ptr [g_87dd58]
        mov     dword ptr [eax], edx
    L_295:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_2a3
        mov     dword ptr [eax], 0
    L_2a3:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_2b1
        mov     dword ptr [eax], 0
    L_2b1:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_2bf
        mov     dword ptr [eax], 0
    L_2bf:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_356
        mov     ecx, dword ptr [g_87dd5c]
        mov     dword ptr [eax], ecx
        ret     0x18
    L_2d6:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_2e6
        mov     ecx, dword ptr [g_87dd3c]
        mov     dword ptr [eax], ecx
    L_2e6:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_2f6
        mov     ecx, dword ptr [g_87dd38]
        mov     dword ptr [eax], ecx
    L_2f6:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_306
        mov     ecx, dword ptr [g_87dd4c]
        mov     dword ptr [eax], ecx
    L_306:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_316
        mov     ecx, dword ptr [g_87dd48]
        mov     dword ptr [eax], ecx
    L_316:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_326
        mov     ecx, dword ptr [g_87dd44]
        mov     dword ptr [eax], ecx
    L_326:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov     ecx, dword ptr [g_87dd28]
        jz      L_336
        mov     dword ptr [eax], ecx
    L_336:
        test    dl, dl
        jnz     L_356
        mov     edx, dword ptr [g_87dd3c]
        mov     eax, dword ptr [g_87dd38]
        mov     dword ptr [g_87dd54], edx
        mov     dword ptr [g_87dd58], eax
        mov     dword ptr [g_87dd5c], ecx
    L_356:
        ret     0x18
    }
}
